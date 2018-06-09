/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSItemProviderSandboxedResource : NSObject <NSCopying, NSSecureCoding> {
    bool  _accessingSecurityScopedResource;
    NSURL * _resourceURL;
    NSData * _sandboxExtensionToken;
}

@property (getter=isAccessingSecurityScopedResource, nonatomic) bool accessingSecurityScopedResource;
@property (nonatomic, copy) NSURL *resourceURL;
@property (nonatomic, copy) NSData *sandboxExtensionToken;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 auditToken:(struct { unsigned int x1[8]; })arg2 error:(id*)arg3;
- (bool)isAccessingSecurityScopedResource;
- (id)resolveURLAndReturnError:(id*)arg1;
- (id)resourceURL;
- (id)sandboxExtensionToken;
- (void)setAccessingSecurityScopedResource:(bool)arg1;
- (void)setResourceURL:(id)arg1;
- (void)setSandboxExtensionToken:(id)arg1;

@end
