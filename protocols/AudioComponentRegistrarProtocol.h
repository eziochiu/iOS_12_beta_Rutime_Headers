/* made by EzioChiu.
 */

@protocol AudioComponentRegistrarProtocol

@required

- (void)getComponentList:(void *)arg1 linkedSDKVersion:(void *)arg2 includeExtensions:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 12: NSString *, int, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSData *, NSArray *, bool, void*

@end
