//
//  RootsController.h
//  GeniusReferrals
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ) on 02/18/2017
//
#import <Foundation/Foundation.h>
#import "Configuration.h"
#import "APIHelper.h"
#import "APIError.h"
#import "BaseController.h"
#import "UnirestClient.h"
#import "HttpContext.h"

@interface RootsController : BaseController

/**
* Completion block definition for asynchronous call to Get Root */
typedef void (^CompletedGetRoot)(BOOL success, HttpContext* context, id response, NSError* error);

/**
* The root of the API
*/
- (void) getRootWithCompletionBlock:(CompletedGetRoot) onCompleted;

@end