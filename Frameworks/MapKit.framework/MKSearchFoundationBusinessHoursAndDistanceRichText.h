/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSearchFoundationBusinessHoursAndDistanceRichText : MKSearchFoundationRichText {
    bool  _businessHoursResolved;
    bool  _distanceResolved;
}

@property (getter=isBusinessHoursResolved) bool businessHoursResolved;
@property (getter=isDistanceResolved) bool distanceResolved;

- (bool)isBusinessHoursResolved;
- (bool)isDistanceResolved;
- (bool)isRichTextResolved;
- (void)resolveBusinessHoursByMapItem:(id)arg1 lines:(id)arg2;
- (void)resolveDistanceNotFound;
- (void)resolveDistanceString:(id)arg1 lines:(id)arg2;
- (void)setBusinessHoursResolved:(bool)arg1;
- (void)setDistanceResolved:(bool)arg1;

@end
