/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFValueSetFormatter : NSFormatter {
    id /* block */  _stringProvider;
    long long  _unitStyle;
}

@property (nonatomic, copy) id /* block */ stringProvider;
@property (nonatomic) long long unitStyle;

+ (id)formatterWithStringProvider:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithStringProvider:(id /* block */)arg1;
- (void)setStringProvider:(id /* block */)arg1;
- (void)setUnitStyle:(long long)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id /* block */)stringProvider;
- (long long)unitStyle;

@end
