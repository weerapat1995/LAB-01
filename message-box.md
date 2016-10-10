
##ID ต่างๆ ที่น่าสนใจ

ID  | Icon
---|---
MB_ICONQUESTION | <img src="http://www.win32developer.com/images/iconquestion.jpg" alt="MB_ICONQUESTION" width="40" height="40">
MB_ICONWARNING |  <img src="http://www.win32developer.com/images/iconwarning.jpg" alt="MB_ICONWARNING" width="40" height="40">  
MB_ICONINFORMATION | <img src="http://www.win32developer.com/images/iconinformation.jpg" alt="MB_ICONINFORMATION" width="40" height="40"> 
MB_ICONERROR | <img src="http://www.win32developer.com/images/iconerror.jpg" alt="MB_ICONERROR" width="40" height="40"> 

นอกจาก element หลักๆ แล้ว เรายังสามารถใช้ไอคอนต่างๆ ร่วมกันได้  (เช่น Yes, No, Cancel, เป็นต้น)

ID  | Icon ต่างๆ 
---|---
MB_ABORTRETRYIGNORE | Abort, Retry และ Ignore
MB_CANCELTRYCONTINUE | Cancel, Try Again และ Continue
MB_HELP | Help
MB_OK | OK
MB_OKCANCEL | OK และ  Cancel
MB_RETRYCANCEL | Retry และ  Cancel
MB_YESNO | Yes และ No
MB_YESNOCANCEL | Yes, Noและ Cancel


เมื่อเรากดปุ่มต่างๆ บน messagebox ระบบจะส่ง message กลับมาตาม ID ของปุ่มที่เรากด ได้แก่

ID  |  เหตุการณ์ที่ส่ง ID กลับจาก MessageBox 
---|---
IDABORT | เมื่อกดปุ่ม Abort
IDCANCEL | เมื่อกดปุ่ม Cancel  
IDCONTINUE | เมื่อกดปุ่ม Continue 
IDIGNORE | เมื่อกดปุ่ม Ignore 
IDNO | เมื่อกดปุ่ม No 
IDOK | เมื่อกดปุ่ม OK 
IDRETRY | เมื่อกดปุ่ม Retry 
IDTRYAGAIN | เมื่อกดปุ่ม Try Again
IDYES | เมื่อกดปุ่ม Yes

##ตัวอย่าง
```c 
  int nResult = MessageBox(NULL,
                   "An example of Cancel,Retry,Continue",
                   "Hello Message Box!",
                   MB_ICONERROR|MB_ABORTRETRYIGNORE);
```
ค่าของ <code>int nResult</code> ที่ส่งกลับมาจาก <code>MessageBox</code> อาจจะเป็น <code>IDABORT</code> ,  <code>IDRETRY</code> หรือ <code>IDIGNORE</code> ตามที่ผู้ใช้กด โดยเราสามารถพิจารณาค่า ได้โดยการใช้คำสั่ง switch ดังต่อไปนี้

```c 

	switch(nResult)
	{
		case IDABORT:
			// statements รองรับการกดปุ่ม 'Abort' 
			break;
		case IDRETRY:
			// statements รองรับการกดปุ่ม 'Retry'  
			break;
		case IDIGNORE:
			// statements รองรับการกดปุ่ม 'Ignore' 
			break;
	}
```
 
 
