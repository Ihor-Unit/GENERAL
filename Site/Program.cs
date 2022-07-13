using Microsoft.EntityFrameworkCore;
using Site.Data;

var builder = WebApplication.CreateBuilder(args);

// Add services to the container /Dependency injection /services /before building the builder
builder.Services.AddControllersWithViews();
builder.Services.AddDbContext<ApplicationDbContext>(options => options.UseSqlServer(
    builder.Configuration.GetConnectionString("DefaultConnection")/*DO NOT rename the ConnectionStrings in json*/
    ));//filename of DB context
builder.Services.AddRazorPages().AddRazorRuntimeCompilation();

var app = builder.Build();

// Configure the HTTP request pipeline.
if (!app.Environment.IsDevelopment())
{
    app.UseExceptionHandler("/Home/Error");
    // The default HSTS value is 30 days. You may want to change this for production scenarios, see https://aka.ms/aspnetcore-hsts.
    app.UseHsts();
}

app.UseHttpsRedirection();
app.UseStaticFiles();//uses defined in wwwroot

//middleware
app.UseRouting();
//app.UseAuthentication(); //always before Authorization
app.UseAuthorization();
//

app.MapControllerRoute(
    name: "default",
    pattern: "{controller=Home}/{action=Index}/{id?}");//redirecting to the corresponding action 

app.Run();
