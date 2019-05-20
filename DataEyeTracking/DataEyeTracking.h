//
//  DataEyeTracking.h
//  DataEyeTracking
//
//  Created by junhai on 2019/5/20.
//  Copyright © 2019 hello. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for DataEyeTracking.
FOUNDATION_EXPORT double DataEyeTrackingVersionNumber;

//! Project version string for DataEyeTracking.
FOUNDATION_EXPORT const unsigned char DataEyeTrackingVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <DataEyeTracking/PublicHeader.h>


#import <DataEyeTracking/DCTrackingAgent.h>


/*
 以下api可以调用
 
 [DCTrackingAgent initWithAppId:@"qpowiejf" andChannelId:@"zovqwefASDF"];
 
 [DCTrackingAgent setUploadInterval:2];
 
 [DCTrackingAgent getUID];
 
 [DCTrackingAgent uploadNow];
 
 [DCTrackingPoint login:@"123123123sdf"];
 
 [DCTrackingPoint createAccount:@"12312sdfjo23908"];
 
 [DCTrackingPoint paymentSuccess:@"1askdjf" orderId:@"1293123120931" currencyAmount:10 currencyType:@"CNY" paymentType:@"sd"];
 
 */
 
 
