//
//  const.h
//
//  Created by AlexYang on 15/11/4.
//  Copyright © 2015年 AlexYang. All rights reserved.
//

#ifndef const_h
#define const_h

#import "MBProgressHUD+MJ.h"
#import "HLHttpClient.h"

#ifdef DEBUG
    #define HLLog(...) NSLog(__VA_ARGS__)
    #define _debuger_name_
#else
    #define HLLog(...)
#endif

#ifdef _debuger_name_
    #define _ADD_POSTER_IN_DICT_(dict)   dict[@"debug_caller"] = @"Yang"
#else
    #define _ADD_POSTER_IN_DICT_(dict)

#endif

#define BLUETOOTH_DISCONNECT @"kBluetoothDisconnect"
#define HRV_RR_RESULT_NAME  @"rr_data_result.arch"

#define BASE_HRV_RESULT_RECORD 7


#define ScreenWidth   ([UIScreen mainScreen].bounds.size.width)
#define ScreenHeight  ([UIScreen mainScreen].bounds.size.height)

#define PADDING_TO_EDGE      20

#define HL_PATH_THIRD_TYPE_LOGIN(fileName) [[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject] stringByAppendingPathComponent:fileName]

//归档路径
#define HL_PATH(fileName) [[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject] stringByAppendingPathComponent:fileName]

//归档和解档宏
#define HL_ARCHIVE(object, fileName) [NSKeyedArchiver archiveRootObject:object toFile:HL_PATH(fileName)]

#define HL_UNARCHIVE(fileName) [NSKeyedUnarchiver unarchiveObjectWithFile:HL_PATH(fileName)]



#warning  请 input your server ip
//服务器Base address
#define PREFIX_Login    @"your IP address"
#define PREFIX          @"your IP address"

#define ScreenWidth   ([UIScreen mainScreen].bounds.size.width)
#define ScreenHeight  ([UIScreen mainScreen].bounds.size.height)

#define UI_IS_IPHONE5           ([[UIScreen mainScreen] bounds].size.height == 568.0)
#define UI_IS_IPHONE6           ([[UIScreen mainScreen] bounds].size.height == 667.0)
#define UI_IS_IPHONE6PLUS       ([[UIScreen mainScreen] bounds].size.height == 736.0)


//#define FONT_FOR_ITEM_NUMBER  @"Gill Sans"
#define FONT_FOR_ITEM_NUMBER  @"Trebuchet MS"

#endif /* const_h */
