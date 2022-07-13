using Microsoft.EntityFrameworkCore;
using Site.Models;

namespace Site.Data{
    public class ApplicationDbContext : DbContext     {
        public ApplicationDbContext(DbContextOptions<ApplicationDbContext> options) : base(options) { 
            
        } 

        public DbSet<Category> Categories/*name of DB table*/ { get; set; } 
    }
}
