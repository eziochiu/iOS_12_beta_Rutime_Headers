/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSAppLinkPattern : NSObject {
    bool  _blocking;
    NSString * _pattern;
}

@property (getter=isBlocking) bool blocking;
@property (copy) NSString *pattern;

+ (id)_normalizedURLPath:(id)arg1 escapeCharacters:(bool)arg2;

- (void)dealloc;
- (id)debugDescription;
- (unsigned long long)evaluateWithURLComponents:(id)arg1;
- (id)initWithURLPathPattern:(id)arg1;
- (bool)isBlocking;
- (id)pattern;
- (void)setBlocking:(bool)arg1;
- (void)setPattern:(id)arg1;

@end
