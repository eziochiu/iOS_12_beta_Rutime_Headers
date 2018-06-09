/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFContactUtility : NSObject

+ (id)sharedInstance;

- (id)contactKeys;
- (id)contactStore;
- (id)displayNameForContact:(id)arg1 andHandle:(id)arg2;
- (id)findOptimalContactInContacts:(id)arg1;
- (id)getContactForHandle:(id)arg1;
- (id)getContactForHandle:(id)arg1 keysToFetch:(id)arg2;

@end
