/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAvailabilityCachedSpan : NSObject {
    NSDate * _creationDate;
    EKAvailabilitySpan * _span;
}

@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) EKAvailabilitySpan *span;

- (void).cxx_destruct;
- (id)creationDate;
- (id)description;
- (void)setCreationDate:(id)arg1;
- (void)setSpan:(id)arg1;
- (id)span;

@end
