/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSPasswordManagerURL : NSObject

+ (id)_resourceSpecifierDictionaryForURL:(id)arg1;
+ (bool)_resourceSpecifierDictionaryIsPasswordManagerResourceSpecifierDictionary:(id)arg1;
+ (id)_resourceSpecifierEncodedKey:(id)arg1 value:(id)arg2;
+ (bool)_urlIsPasswordManagerURLWithScheme:(id)arg1 resourceSpecifierDictionary:(id)arg2;
+ (id)dictionaryWithPasswordManagerURL:(id)arg1;
+ (id)passwordManagerURLWithDictionary:(id)arg1;
+ (bool)urlIsPasswordManagerURL:(id)arg1;
+ (id)valueForPasswordManagerResourceDictionary:(id)arg1 key:(id)arg2;
+ (id)valueForPasswordManagerURL:(id)arg1 key:(id)arg2;

@end
