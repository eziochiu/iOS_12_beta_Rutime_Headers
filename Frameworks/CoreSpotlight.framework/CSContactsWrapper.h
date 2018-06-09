/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSContactsWrapper : NSObject

@property (nonatomic, readonly) NSString *CNContactEmailAddressKeyString;
@property (nonatomic, readonly) Class CNContactPropertyClass;

+ (id)sharedInstance;

- (id)CNContactEmailAddressKeyString;
- (Class)CNContactPropertyClass;

@end
