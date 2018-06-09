/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFFavoriteLocationRequest : WFTask {
    id /* block */  _resultHandler;
}

@property (readonly) id /* block */ resultHandler;

- (void).cxx_destruct;
- (void)handleCancellation;
- (void)handleResponse:(id)arg1;
- (id)initWithResultHandler:(id /* block */)arg1;
- (id /* block */)resultHandler;
- (void)startWithService:(id)arg1;

@end
