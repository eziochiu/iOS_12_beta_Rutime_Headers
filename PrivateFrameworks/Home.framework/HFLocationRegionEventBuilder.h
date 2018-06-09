/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFLocationRegionEventBuilder : HFEventBuilder <HFLocationEventBuilder> {
    CLCircularRegion * _region;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) CLCircularRegion *region;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)buildNewEventFromCurrentState;
- (id)description;
- (unsigned long long)eventType;
- (id)initWithEvent:(id)arg1;
- (bool)isRegionAtHome:(id)arg1;
- (id)region;
- (void)setRegion:(id)arg1;

@end
