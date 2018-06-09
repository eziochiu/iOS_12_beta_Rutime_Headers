/* made by EzioChiu
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSActivity : CLSObject <CLSRelationable> {
    NSDate * _activityStartDate;
    double  _duration;
    bool  _paused;
    NSString * _primaryActivityItemIdentifier;
}

@property (nonatomic, readonly) NSArray *additionalActivityItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLSActivityItem *primaryActivityItem;
@property (nonatomic, copy) NSString *primaryActivityItemIdentifier;
@property (nonatomic) double progress;
@property (readonly) Class superclass;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_generateTimeInterval;
- (id)_init;
- (bool)_isObjectActivityItem:(id)arg1 withIdentifier:(id)arg2;
- (bool)_isObjectPrimaryItem:(id)arg1;
- (id)activityItemWithIdentifier:(id)arg1;
- (void)addAdditionalActivityItem:(id)arg1;
- (void)addProgressRangeFromStart:(double)arg1 toEnd:(double)arg2;
- (id)additionalActivityItems;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (long long)effectiveAuthorizationStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isStarted;
- (void)pause;
- (id)primaryActivityItem;
- (id)primaryActivityItemIdentifier;
- (double)progress;
- (void)resume;
- (double)runningDelta;
- (void)setPrimaryActivityItem:(id)arg1;
- (void)setPrimaryActivityItemIdentifier:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)start;
- (void)stop;
- (bool)validatePrimaryActivityItemType:(id)arg1;

@end
