/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXRecipientUtilities : NSObject

+ (void)_getAddressForContact:(id)arg1 address:(id*)arg2 addressKind:(unsigned long long*)arg3;
+ (bool)bootstrapPersonSuggestion:(id)arg1 withContact:(id)arg2 error:(id*)arg3;
+ (id)composeRecipientForAddress:(id)arg1 kind:(long long)arg2;
+ (id)composeRecipientForContact:(id)arg1;
+ (id)composeRecipientForPersonSuggestion:(id)arg1;
+ (id)composeRecipientForRecipient:(id)arg1;
+ (bool)px_IsValidEmailAddress:(id)arg1;
+ (long long)px_addressKindFromString:(id)arg1;
+ (unsigned long long)px_mf_addressKindFromString:(id)arg1;
+ (id)px_validPhoneNumberFromString:(id)arg1;

@end
