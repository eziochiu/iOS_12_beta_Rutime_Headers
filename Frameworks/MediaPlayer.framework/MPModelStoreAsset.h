/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelStoreAsset : MPModelObject

@property (nonatomic) unsigned long long accountIdentifier;
@property (nonatomic) long long endpointType;
@property (nonatomic, copy) NSString *redownloadParameters;
@property (getter=isRedownloadable, nonatomic) bool redownloadable;
@property (nonatomic) bool shouldReportPlayEvents;
@property (getter=isSubscriptionRequired, nonatomic) bool subscriptionRequired;

+ (id)__accountIdentifier_KEY;
+ (id)__endpointType_KEY;
+ (id)__redownloadParameters_KEY;
+ (id)__redownloadable_KEY;
+ (id)__shouldReportPlayEvents_KEY;
+ (id)__subscriptionRequired_KEY;
+ (id)allSupportedProperties;

@end
