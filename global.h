#ifndef GLOBAL_H
#define GLOBAL_H
#include <QWidget>
#include <QDebug>
#include <functional>
#include <QStyle>
#include <memory>
#include <iostream>
#include <mutex>
#include <QByteArray>
#include <QNetworkReply>
#include <QJsonObject>
#include <QDir>  // 用于处理文件目录的（反）斜杠
#include <QSettings>

/**
 * @brief repolish 用于刷新QSS
 */
// 头文件定义函数需要用extern
extern std::function<void(QWidget*)> repolish; //预先声明有这个函数，让编译器去cpp文件找这个函数
extern QString gate_url_prefix;

enum ReqId{
    ID_GET_VERIFY_CODE = 1001, //请求验证码
    ID_REG_USER = 1002, // 注册用户
};

enum Modules{
    REGISTERMOD = 1, // 注册模块
};

enum ErrorCodes{
    SUCCESS = 0,
    ERR_JSON = 1, // JSON解析失败
    ERR_NETWORK = 2, // 网络错误
};

#endif // GLOBAL_H
