/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGSearchableItemHelper : NSObject

+ (id)deserializeAttributes:(id)arg1;
+ (id)deserializeAttributes:(id)arg1 andBody:(id)arg2;
+ (id)deserializeAttributesAndBody:(id)arg1;
+ (id)messageIdHeaderValues:(id)arg1;
+ (bool)searchableItemIsEligibleForHarvesting:(id)arg1 eligibleExceptForAge:(bool*)arg2;
+ (bool)searchableItemIsEmpty:(id)arg1;
+ (bool)searchableItemIsFromSupportedAccount:(id)arg1;
+ (bool)searchableItemIsInDrafts:(id)arg1;
+ (bool)searchableItemIsInDrafts:(id)arg1 mailboxIdentifiers:(id)arg2;
+ (bool)searchableItemIsInSent:(id)arg1;
+ (bool)searchableItemIsInSent:(id)arg1 mailboxIdentifiers:(id)arg2;
+ (bool)searchableItemIsInTrash:(id)arg1;
+ (bool)searchableItemIsInTrash:(id)arg1 mailboxIdentifiers:(id)arg2;
+ (bool)searchableItemIsRecent:(id)arg1;
+ (bool)searchableItemIsRecent:(id)arg1 emailHeaders:(id)arg2;
+ (bool)searchableItemIsSPAM:(id)arg1;
+ (bool)searchableItemIsSPAM:(id)arg1 emailHeaders:(id)arg2 mailboxIdentifiers:(id)arg3;
+ (bool)searchableItemIsTooBig:(id)arg1;
+ (bool)searchableItemIsValid:(id)arg1;
+ (bool)searchableItemIsValid:(id)arg1 emailHeaders:(id)arg2 mailboxIdentifiers:(id)arg3;
+ (bool)searchableItemIsWhitelistedNonMessage:(id)arg1;
+ (id)serializeAttributes:(id)arg1;
+ (id)serializeAttributesAndBody:(id)arg1;

@end
