/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGSymbolicMappingTransformer : NSObject <PMLTransformerProtocol> {
    NSString * _characterMapping;
    NSCharacterSet * _characterSet;
    NSString * _numericMapping;
}

@property (retain) NSString *characterMapping;
@property (retain) NSCharacterSet *characterSet;
@property (retain) NSString *numericMapping;

+ (id)withNumericMapping:(id)arg1 andSymbolicMapping:(id)arg2;

- (void).cxx_destruct;
- (id)characterMapping;
- (id)characterSet;
- (id)initWithNumericMapping:(id)arg1 andSymbolicMapping:(id)arg2;
- (id)numericMapping;
- (void)setCharacterMapping:(id)arg1;
- (void)setCharacterSet:(id)arg1;
- (void)setNumericMapping:(id)arg1;
- (id)transform:(id)arg1;

@end
