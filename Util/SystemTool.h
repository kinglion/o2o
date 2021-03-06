//
//  SystemTool.h
//  o2o
//
//  Created by 小才 on 13-8-21.
//  Copyright (c) 2013年 uniideas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ASIHTTPRequest.h"
#import "ASIFormDataRequest.h"
#import "UserBean.h"
@interface SystemTool : NSObject<ASIHTTPRequestDelegate>

@property (nonatomic,strong) UserBean *bean;
+ (id)sharedInstance;
+ (void)requestLogin;
-(id)initialize;
+ (BOOL)isLogin;
- (NSString *)getUserId;
- (NSString *)getUserName;
- (void)clearUserSession;
- (void)HttpRequest:(NSString *)urlString params:(NSDictionary *)dicts;
+ (float)getDistance:(float)lat1 lng1:(float)lng1 lat2:(float)lat2 lng2:(float)lng2;
+ (float)radians:(float)degrees;
+ (NSString *)transPerformanceWithDistance:(NSString *)distance;
@end
