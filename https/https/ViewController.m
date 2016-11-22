//
//  ViewController.m
//  https
//
//  Created by AlexYang on 16/9/14.
//  Copyright © 2016年 AlexYang. All rights reserved.
//

#import "ViewController.h"
#import "HLHttpClient.h"
#import "const.h"

@interface ViewController ()
@property (nonatomic, weak) UIWebView *webView;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
//    UIWebView *web = [[UIWebView alloc] initWithFrame:CGRectMake(0, 64, 320, 400)];
//    NSURL *url = [NSURL URLWithString:PREFIX];
//    NSURLRequest *request = [NSURLRequest requestWithURL:url];
//    [web loadRequest:request];
    
//    [self.view addSubview:web];
    
}

-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    HLHttpClient *httpClient = [HLHttpClient sharedInstance];
    
    [httpClient post:@"/" parameters:nil success:^(NSDictionary * responseObject) {
        NSLog(@"response:%@", responseObject.debugDescription);
    } fail:^(NSString *error) {
        NSLog(@"err:%@", error);
    }];
//    NSDictionary *dict = @{@"phone":@"13798573121"};
//    [httpClient post:@"/captcha" parameters:(NSMutableDictionary *)dict success:^(NSDictionary * responseObject) {
//        NSLog(@"response:%@", responseObject.debugDescription);
//    } fail:^(NSString *error) {
//        NSLog(@"err:%@", error);
//    }];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
