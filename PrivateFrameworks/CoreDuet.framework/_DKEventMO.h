/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKEventMO : _DKObjectMO

@property (nonatomic) double confidence;
@property (nonatomic, retain) NSSet *customMetadata;
@property (nonatomic) double endDate;
@property (nonatomic) short endDayOfWeek;
@property (nonatomic) int endSecondOfDay;
@property (nonatomic) bool hasCustomMetadata;
@property (nonatomic) bool hasStructuredMetadata;
@property (nonatomic) long long secondsFromGMT;
@property (nonatomic) bool shouldSync;
@property (nonatomic) double startDate;
@property (nonatomic) short startDayOfWeek;
@property (nonatomic) int startSecondOfDay;
@property (nonatomic, retain) NSString *streamName;
@property (nonatomic, retain) _DKStructuredMetadataMO *structuredMetadata;
@property (nonatomic, retain) _DKObjectMO *value;
@property (nonatomic) short valueClass;
@property (nonatomic) double valueDouble;
@property (nonatomic) long long valueInteger;
@property (nonatomic, retain) NSString *valueString;
@property (nonatomic) long long valueTypeCode;

@end
