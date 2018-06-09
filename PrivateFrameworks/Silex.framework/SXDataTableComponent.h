/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDataTableComponent : SXComponent

@property (nonatomic, readonly) SXDataRecordStore *data;
@property (nonatomic, readonly) unsigned long long dataOrientation;
@property (nonatomic, readonly) bool showDescriptorLabels;
@property (nonatomic, readonly) SXJSONArray *sortBy;
@property (nonatomic, readonly) NSString *tableStyle;

+ (id /* block */)valueClassBlockForPropertyWithName:(id)arg1;

- (unsigned long long)dataOrientationWithValue:(id)arg1 withType:(int)arg2;
- (bool)showDescriptorLabelsWithValue:(id)arg1 withType:(int)arg2;

@end
