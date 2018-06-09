/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAReminderSearch : SADomainCommand

@property (nonatomic, copy) NSNumber *completionStatus;
@property (nonatomic, copy) NSDate *dueAfter;
@property (nonatomic, copy) NSDate *dueBefore;
@property (nonatomic, copy) NSString *listName;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic, copy) NSString *timeZoneId;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)completionStatus;
- (id)dueAfter;
- (id)dueBefore;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)listName;
- (bool)requiresResponse;
- (void)setCompletionStatus:(id)arg1;
- (void)setDueAfter:(id)arg1;
- (void)setDueBefore:(id)arg1;
- (void)setListName:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setTimeZoneId:(id)arg1;
- (id)subject;
- (id)timeZoneId;

@end
