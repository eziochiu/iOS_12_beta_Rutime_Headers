/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSConcreteLazyPropertyList : _LSLazyPropertyList {
    NSData * _plistData;
    _LSPlistHint * _plistHint;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_getPropertyList:(id*)arg1;
- (bool)_getValue:(id*)arg1 forPropertyListKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyListData:(id)arg1;

@end
