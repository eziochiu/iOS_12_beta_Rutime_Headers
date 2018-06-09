/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostAnimationInterval : SignpostInterval {
    NSArray * _compositeIntervals;
}

@property (nonatomic, retain) NSArray *compositeIntervals;
@property (nonatomic, readonly) unsigned long long frameCount;
@property (nonatomic, readonly) float frameRate;

+ (id)serializationTypeNumber;

- (void).cxx_destruct;
- (id)_intervalTypeString;
- (id)compositeIntervals;
- (id)debugDescription;
- (id)descriptionStringForColumn:(unsigned long long)arg1 timeInSeconds:(bool)arg2;
- (unsigned long long)frameCount;
- (float)frameRate;
- (id)initWithBeginEvent:(id)arg1 endEvent:(id)arg2 compositeIntervalTimeline:(id)arg3;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)serializeableDictionary;
- (void)setCompositeIntervals:(id)arg1;

@end
