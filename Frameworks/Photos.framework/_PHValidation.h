/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface _PHValidation : NSObject {
    NSError * _error;
    unsigned long long  _requestedOptions;
    unsigned long long  _validatedOptions;
}

- (void).cxx_destruct;
- (void)assert:(bool)arg1 error:(id)arg2;
- (void)assert:(bool)arg1 format:(id)arg2;
- (id)initWithOptions:(unsigned long long)arg1;
- (bool)isValid:(id*)arg1;
- (void)validateOption:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;

@end
