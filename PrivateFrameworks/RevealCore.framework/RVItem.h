/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RevealCore.framework/RevealCore
 */

@interface RVItem : NSObject <NSSecureCoding> {
    id  _clientHints;
    NSString * _clientIdentifier;
    long long  _contactPropertyType;
    NSString * _contactPropertyValue;
    DDScannerResult * _ddResult;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _highlightRange;
    bool  _normalized;
    long long  _normalizedType;
    long long  _selectionType;
    NSString * _text;
    long long  _type;
    NSURL * _url;
}

@property (nonatomic, retain) id clientHints;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) long long contactPropertyType;
@property (nonatomic, readonly) NSString *contactPropertyValue;
@property (nonatomic, readonly) DDScannerResult *ddResult;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } highlightRange;
@property (nonatomic, readonly) long long normalizedType;
@property (nonatomic, readonly) NSURL *normalizedURL;
@property (nonatomic, readonly) long long selectionType;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *textSearchContext;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientHints;
- (id)clientIdentifier;
- (long long)contactPropertyType;
- (id)contactPropertyValue;
- (id)ddResult;
- (void)encodeWithCoder:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })highlightRange;
- (id)initEmpty;
- (id)initWithClientIdentifier:(id)arg1 rangeInContext:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactProperty:(long long)arg1 value:(id)arg2 rangeInContext:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)initWithDDResult:(id)arg1;
- (id)initWithText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithURL:(id)arg1 rangeInContext:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)normalize;
- (long long)normalizedType;
- (id)normalizedURL;
- (long long)selectionType;
- (void)setClientHints:(id)arg1;
- (id)text;
- (id)textSearchContext;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textSearchRange;
- (long long)type;
- (id)url;

@end
