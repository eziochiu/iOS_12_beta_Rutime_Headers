/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSTArchivedLayoutHint : TSPObject <TSDArchivedHint> {
    TSTLayoutHint * mHint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TSTLayoutHint *hint;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)hint;
- (id)initWithContext:(id)arg1 hint:(id)arg2;
- (void)setHint:(id)arg1;

@end
