/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@class <WebGeolocationCoreLocationUpdateListener>;

@interface WebGeolocationCoreLocationProvider : NSObject <CLLocationManagerDelegate> {
    <WebGeolocationCoreLocationUpdateListener> *_positionListener;
    struct RetainPtr<CLLocationManager> { 
        void *m_ptr; 
    } _locationManager;
    bool_isWaitingForAuthorization;
    int _lastAuthorizationStatus;
}


- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)sendLocation:(id)arg1;
- (void)createLocationManager;
- (void)requestGeolocationAuthorization;
- (id)initWithListener:(id)arg1;
- (void)setEnableHighAccuracy:(bool)arg1;
- (void)start;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)stop;

@end