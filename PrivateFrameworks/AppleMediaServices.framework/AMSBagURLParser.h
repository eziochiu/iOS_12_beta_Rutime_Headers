/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSBagURLParser : NSObject

+ (id)URLBySubstitutingVariablesInURLString:(id)arg1 usingBlock:(id /* block */)arg2;
+ (id)_firstVariableInTemplate:(id)arg1 includeTags:(bool)arg2;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfTemplateInURLString:(id)arg1;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeofSubstringWithOpeningTag:(id)arg1 closingTag:(id)arg2 inString:(id)arg3;

@end
