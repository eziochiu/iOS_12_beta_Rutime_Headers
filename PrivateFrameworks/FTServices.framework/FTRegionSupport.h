/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTRegionSupport : NSObject {
    FTMessageDelivery * _delivery;
    NSArray * _regions;
}

@property (retain) FTMessageDelivery *delivery;
@property (readonly) bool isLoaded;
@property (readonly) bool isLoading;
@property (retain) NSArray *regions;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_buildMessageDeliveryIfNeeded;
- (void)dealloc;
- (id)delivery;
- (void)flushRegions;
- (bool)isLoaded;
- (bool)isLoading;
- (id)regionForID:(id)arg1;
- (id)regions;
- (void)setDelivery:(id)arg1;
- (void)setRegions:(id)arg1;
- (void)startLoading;

@end
