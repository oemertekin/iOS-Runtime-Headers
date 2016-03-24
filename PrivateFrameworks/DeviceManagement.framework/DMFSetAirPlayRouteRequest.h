/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFSetAirPlayRouteRequest : CATTaskRequest {
    NSString *_password;
    NSString *_routeUID;
}

@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *routeUID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)password;
- (id)routeUID;
- (void)setPassword:(id)arg1;
- (void)setRouteUID:(id)arg1;

@end