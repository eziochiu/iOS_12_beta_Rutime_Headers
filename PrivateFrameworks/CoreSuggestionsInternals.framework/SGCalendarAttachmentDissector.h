/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGCalendarAttachmentDissector : SGPipelineDissector {
    SGAccountsAdapter * _accountsAdapter;
    EKEventStore * _ekStore;
    SGMEventICSOpportunity * _icsOpportunityTracker;
}

+ (id)baseAttachmentFrom:(id)arg1 includingEvents:(id)arg2 withRanges:(id)arg3;
+ (long long)replaceTzid:(id)arg1 inDocument:(id)arg2 fromOriginal:(id)arg3 withBaseLength:(unsigned long long)arg4 withEventRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
+ (id)splitAttachment:(id)arg1 intoEvents:(id)arg2 withTimezones:(id)arg3;

- (void).cxx_destruct;
- (struct SGMEventICSSourceType_ { unsigned long long x1; })accountTypeFor:(id)arg1;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (id)downloadedCalendarAttachmentsFrom:(id)arg1;
- (id)enrichmentsFromData:(id)arg1 inDocument:(id)arg2 withParentEntity:(id)arg3;
- (bool)hasCalendarAccountForOneOf:(id)arg1;
- (bool)hasCalendarSourceForRequestFrom:(id)arg1 withEvent:(id)arg2;
- (id)init;
- (bool)shouldIgnoreEntity:(id)arg1;

@end
