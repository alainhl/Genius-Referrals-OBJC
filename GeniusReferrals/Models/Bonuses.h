//
//  Bonuses.h
//  GeniusReferrals
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ) on 02/18/2017
//
#ifndef APIMATIC_BONUSES
#define APIMATIC_BONUSES

#import <Foundation/Foundation.h>
#import "JSONModel.h"
#import "APIHelper.h"



//protocol defined for deserialization of JSON
@protocol Bonuses
@end

@interface Bonuses : JSONModel

/**
* The referral's token. Usually the one that completed the purchase, or trigger an event.
*/
@property NSString* advocateToken;

/**
* The reference number for this request. Usually the order_id, payment_id, or timestamp.
*/
@property NSString* reference;

/**
* The payment amount the referrals has made. Required for a percentage based campaign.
*/
@property NSNumber* paymentAmount;


/**
* Key mappings for the json serialization and deserialization
*/
+(NSDictionary*) keyMap;

/**
* Key mapper for json serialization and deserialization
*/
+(JSONKeyMapper*) keyMapper;

/**
* Helps avoiding deserialization errors when one or more properties are missing
* @returns	True, indicating that all properties are optional for deserialization
*/
+(BOOL)propertyIsOptional:(NSString*) propertyName;

@end
#endif