/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNCalculatesContactDiff : NSObject

+ (void)addMultiValueUpdateTo:(id)arg1 forProperty:(id)arg2 contact1:(id)arg3 contact2:(id)arg4;
+ (void)addSingleValueUpdateTo:(id)arg1 forProperty:(id)arg2 contact1:(id)arg3 contact2:(id)arg4;
+ (id)diffContact:(id)arg1 to:(id)arg2 error:(id*)arg3;

@end
