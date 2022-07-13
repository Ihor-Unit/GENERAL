using Microsoft.AspNetCore.Mvc;
using Site.Data;
using Site.Models;

namespace Site.Controllers
{
    public class CategoryController : Controller    {

        private readonly ApplicationDbContext _db;//the DB

        public CategoryController(ApplicationDbContext db) {
            _db = db;
        } 
        public IActionResult Index() {
            IEnumerable<Category> objCategoryList = _db.Categories.ToList();//retrieves the db and convert it into a list
            return View(objCategoryList);
        }
        public IActionResult Create() {//GET
            
            return View();  
        }

        [HttpPost]
        [ValidateAntiForgeryToken]
        public IActionResult Create(Category obj)  {//POST

            if (obj.Name == obj.DisplayOrder.ToString())  {
                ModelState.AddModelError("Custom Error"/*name*/, "This cannot match");
            }

            if (ModelState.IsValid) {
                _db.Categories.Add(obj);
                _db.SaveChanges();
                return RedirectToAction("Index"/*,"Controller name"*/);
            }
            return View(obj);
        }
    }
}
