/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INDeferredLocalizedString : NSString {
    NSArray * _arguments;
    NSString * _bundleIdentifier;
    NSURL * _bundleURL;
    NSString * _cachedLocalization;
    NSString * _formatKey;
    NSString * _table;
}

@property (setter=_setArguments:, nonatomic, copy) NSArray *_arguments;
@property (setter=_setBundleIdentifier:, nonatomic, copy) NSString *_bundleIdentifier;
@property (setter=_setBundleURL:, nonatomic, copy) NSURL *_bundleURL;
@property (nonatomic, readonly, copy) NSString *_cachedLocalization;
@property (setter=_setFormatKey:, nonatomic, copy) NSString *_formatKey;
@property (setter=_setTable:, nonatomic, copy) NSString *_table;

+ (id)_sharedFormatRegularExpression;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_arguments;
- (id)_bundleIdentifier;
- (id)_bundleURL;
- (id)_cachedLocalization;
- (id)_formatKey;
- (id)_intents_encodeForProto;
- (void)_setArguments:(id)arg1;
- (void)_setBundleIdentifier:(id)arg1;
- (void)_setBundleURL:(id)arg1;
- (void)_setFormatKey:(id)arg1;
- (void)_setTable:(id)arg1;
- (id)_table;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeferredFormat:(id)arg1 fromTable:(id)arg2 bundle:(id)arg3 arguments:(char *)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;
- (id)localizeForLanguage:(id)arg1;

@end
