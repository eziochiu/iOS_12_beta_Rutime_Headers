/* made by EzioChiu
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWBrowser : NSObject {
    NWBrowseDescriptor * _descriptor;
    NSObject<OS_nw_browser> * _internalBrowser;
    NSSet * _internalDiscoveredEndpoints;
    NWParameters * _parameters;
}

@property (readonly) NWBrowseDescriptor *descriptor;
@property (nonatomic, readonly) NSSet *discoveredEndpoints;
@property (readonly) NSObject<OS_nw_browser> *internalBrowser;
@property (retain) NSSet *internalDiscoveredEndpoints;
@property (readonly) NWParameters *parameters;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void).cxx_destruct;
- (void)cancel;
- (id)copyDiscoveredEndpoints;
- (void)dealloc;
- (id)descriptor;
- (id)discoveredEndpoints;
- (id)initWithDescriptor:(id)arg1 parameters:(id)arg2;
- (id)internalBrowser;
- (id)internalDiscoveredEndpoints;
- (id)parameters;
- (void)setInternalDiscoveredEndpoints:(id)arg1;
- (void)setUpdateHandler;

@end
