/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSXPCListenerEndpoint : NSObject <NSSecureCoding> {
    void * _internal;
}

+ (bool)supportsSecureCoding;

- (id)_endpoint;
- (id)_initWithConnection:(id)arg1;
- (void)_setEndpoint:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
