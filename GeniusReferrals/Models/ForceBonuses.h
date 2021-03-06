//
//  ForceBonuses.h
//  GeniusReferrals
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ) on 02/18/2017
//
#ifndef APIMATIC_FORCEBONUSES
#define APIMATIC_FORCEBONUSES

#import <Foundation/Foundation.h>
#import "JSONModel.h"
#import "APIHelper.h"



//protocol defined for deserialization of JSON
@protocol ForceBonuses
@end

@interface ForceBonuses : JSONModel

/**
* The referral's token.
*/
@property NSString* advocateToken;

/**
* The reference number for this request. Usually the order_id, payment_id, or timestamp.
*/
@property NSString* reference;

/**
* The bonus amount to give to the advocate.
*/
@property int bonusAmount;


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