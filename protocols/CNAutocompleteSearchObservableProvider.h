/* made by EzioChiu.
 */

@protocol CNAutocompleteSearchObservableProvider <NSObject>

@required

- (CNObservable *)calendarServersSearchObservable;
- (CNObservable *)directoryServersSearchObservable;
- (CNObservable *)localSearchObservable;
- (CNObservable *)predictionsSearchObservableWithUnfilteredResultPromise:(id <CNPromise>)arg1;
- (CNObservable *)recentsSearchObservable;
- (CNObservable *)suggestionsSearchObservable;

@end
