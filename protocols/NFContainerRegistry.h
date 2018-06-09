/* made by EzioChiu.
 */

@protocol NFContainerRegistry <NSObject>

@required

- (<NFCallbackRegistration> *)callback;
- (<NFRegistrationContainer> *)privateContainer;
- (<NFRegistrationContainer> *)publicContainer;

@end
