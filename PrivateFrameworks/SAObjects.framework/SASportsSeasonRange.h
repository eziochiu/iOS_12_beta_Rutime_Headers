/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsSeasonRange : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *end;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *seasonType;
@property (nonatomic, copy) NSDate *start;
@property (readonly) Class superclass;

+ (id)seasonRange;
+ (id)seasonRangeWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)end;
- (id)groupIdentifier;
- (id)seasonType;
- (void)setEnd:(id)arg1;
- (void)setSeasonType:(id)arg1;
- (void)setStart:(id)arg1;
- (id)start;

@end
