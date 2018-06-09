/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKCSSDeclaration : NSObject {
    NSString * _aliasedName;
    bool  _important;
    NSString * _name;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _nameRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    unsigned long long  _type;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _valueRange;
}

@property (nonatomic, retain) NSString *aliasedName;
@property bool important;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } nameRange;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) NSString *stringValue;
@property unsigned long long type;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } valueRange;

+ (id)typeString:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)aliasedName;
- (id)description;
- (bool)important;
- (id)name;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })nameRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setAliasedName:(id)arg1;
- (void)setImportant:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNameRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setValueRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)stringValue;
- (unsigned long long)type;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })valueRange;

@end
