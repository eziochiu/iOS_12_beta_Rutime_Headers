/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSAppLinkPlugIn : NSObject {
    NSURLComponents * _URLComponents;
    NSXPCConnection * _XPCConnection;
    unsigned long long  _limit;
}

@property (retain) NSURLComponents *URLComponents;
@property (retain) NSXPCConnection *XPCConnection;
@property unsigned long long limit;

+ (bool)canHandleURLComponents:(id)arg1;
+ (Class)plugInClasses;

- (id)URLComponents;
- (id)XPCConnection;
- (void)dealloc;
- (void)getAppLinksWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)limit;
- (void)setLimit:(unsigned long long)arg1;
- (void)setURLComponents:(id)arg1;
- (void)setXPCConnection:(id)arg1;

@end
