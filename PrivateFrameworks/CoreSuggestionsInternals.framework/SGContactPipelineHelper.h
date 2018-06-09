/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGContactPipelineHelper : NSObject

+ (bool)contactExistsInArray:(id)arg1 withName:(id)arg2;
+ (id)contactStore;
+ (id)findContactFromEntity:(id)arg1 withType:(unsigned long long)arg2 detailValue:(id)arg3;
+ (id)findContactInArray:(id)arg1 withDetailType:(unsigned long long)arg2 andValue:(id)arg3;
+ (id)findContactsForDetailType:(unsigned long long)arg1 andValue:(id)arg2;
+ (id)findContactsForPerson:(id)arg1 fetchingKeys:(id)arg2;

@end
