/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
 */

@interface CSIndexClientConnection : NSObject {
    CSClientConnectionConfiguration * _configuration;
    bool  _quotaDisabled;
    MDSearchableIndexService * _service;
}

@property (nonatomic, readonly) CSClientConnectionConfiguration *configuration;
@property (nonatomic, readonly) bool quotaDisabled;
@property (nonatomic, readonly) MDSearchableIndexService *service;

- (void).cxx_destruct;
- (id)configuration;
- (id)initWithConfiguration:(id)arg1 indexer:(id)arg2;
- (id)initWithConnection:(id)arg1 indexer:(id)arg2;
- (bool)quotaDisabled;
- (id)service;

@end
