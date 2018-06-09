/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFSimpleFormatter : NSFormatter <NSCopying> {
    id /* block */  _attributedFormatterBlock;
    id /* block */  _formatterBlock;
}

@property (nonatomic, readonly, copy) id /* block */ attributedFormatterBlock;
@property (nonatomic, readonly, copy) id /* block */ formatterBlock;

- (void).cxx_destruct;
- (id /* block */)attributedFormatterBlock;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)formatterBlock;
- (id)init;
- (id)initWithAttributedFormatterBlock:(id /* block */)arg1;
- (id)initWithFormatterBlock:(id /* block */)arg1;
- (id)stringForObjectValue:(id)arg1;

@end
