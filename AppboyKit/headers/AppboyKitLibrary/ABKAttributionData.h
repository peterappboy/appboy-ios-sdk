#import <Foundation/Foundation.h>


/*
 * Appboy Public API: ABKAttributionData
 */
NS_ASSUME_NONNULL_BEGIN
@interface ABKAttributionData : NSObject

/*!
 * @param network The attribution network
 * @param campaign The attribution campaign
 * @param adGroup The attribution adGroup
 * @param creative The attribution creative
 *
 * @discussion: Creates an ABKAttributionData object to send to Appboy's servers.
 */
- (id) initWithNetwork:(nullable NSString *)network
              campaign:(nullable NSString *)campaign
               adGroup:(nullable NSString *)adGroup
              creative:(nullable NSString *) creative;

@property (nonatomic, readonly, nullable) NSString *network;
@property (nonatomic, readonly, nullable) NSString *campaign;
@property (nonatomic, readonly, nullable) NSString *adGroup;
@property (nonatomic, readonly, nullable) NSString *creative;
@end
NS_ASSUME_NONNULL_END