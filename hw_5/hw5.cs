using System;  
namespace DelegateExample {  
    public class EmployeeUtils {  
        public void FetchEmployeeDetails(string employeeId) {}  
        public void SaveEmployeeDetails(EmployeeModel employeeDetails) {}  
        public void ValidateEmployeeDetails(EmployeeModel employeeDetails) {}  
        public void ExportEmpDetailsToCSV(EmployeeModel employeDetails) {}  
        public void ImportEmpDetailsForDb(EmployeeModel employeeDetails) {}  
        private class EmployeeModel {  
            public string EmployeeId {  
                get;  
                set;  
            }  
            public string EmployeeName {  
                get;  
                set;  
            }  
            public string EmpplyeeAddress {  
                get;  
                set;  
            }  
            public string EmployeeDesignation {  
                get;  
                set;  
            }  
            public double EmployeeSalary {  
                get;  
                set;  
            }  
        }  
    }  
}  


public class EmployeeModel  
{  
    public string EmployeeId { get; set; }  
    public string EmployeeName { get; set; }  
    public string EmpplyeeAddress { get; set; }  
    public string EmployeeDesignation { get; set; }  
    public double EmployeeSalary { get; set; }  
}

public interface IImportExport  
{  
    void ExportEmpDetailsToCSV(EmployeeModel employeDetails) { }  
    void ImportEmpDetailsForDb(EmployeeModel employeeDetails) { }  
}  
  
public class ImportExport  IImportExport  
{  
  
}

{  
    void FetchEmployeeDetails(string employeeId) { }  
    void SaveEmployeeDetails(EmployeeModel employeeDetails) { }  
}  
  
public class EmployeeDbOperations  IEmployeeDbOperations  
{  
} 


public interface IEmployeeValidation  
{  
    void ValidateEmployeeDetails(EmployeeModel employeeDetails) { }  
}  
  
public class EmployeeValidation  IEmployeeValidation  
{  
} 