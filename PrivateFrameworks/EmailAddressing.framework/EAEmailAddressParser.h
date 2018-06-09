/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmailAddressing.framework/EmailAddressing
 */

@interface EAEmailAddressParser : NSObject

+ (void)_componentsForFullAddress:(id)arg1 rawAddressIndexes:(id*)arg2 localPartIndexes:(id*)arg3 domainIndexes:(id*)arg4;
+ (id)addressDomainFromAddress:(id)arg1;
+ (bool)addressIsEmptyGroup:(id)arg1;
+ (id)displayNameFromAddress:(id)arg1;
+ (void)insertPreviousRoute:(unsigned short*)arg1 ofLength:(unsigned long long)arg2 toBuffer:(unsigned short**)arg3 ofLength:(unsigned long long)arg4 atPosition:(unsigned short*)arg5 addSpace:(bool)arg6;
+ (bool)isLegalEmailAddress:(id)arg1;
+ (id)localPartFromAddress:(id)arg1;
+ (id)rawAddressFromFullAddress:(id)arg1;
+ (id)rawAddressRespectingGroupsFromFullAddress:(id)arg1;
+ (id)unsafeAddressLocalPartCharacterSet;

@end
